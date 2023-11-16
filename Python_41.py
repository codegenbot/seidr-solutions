from collections import namedtuple


Car = namedtuple('Car', ['time'])

def num_collisions(lrlist, rllist):
    """ complexcity: O(mlog(n)) """
    lrlen = len(lrlist)
    rllen = len(rllist)

    lridx = 0
    rlidx = 0
    collisions = 0

    while lridx < lrlen:
        lrcar = lrlist[lridx]
        rlcar = rllist[rlidx]
        if lrcar.time < rlcar.time:
            lridx += 1
        else:
            rlidx += 1
            collisions += lridx
    return collisions



if __name__ == "__main__":
    car_infos = [
        [1, 2],
        [4, 5],
        [2, 3],
    ]

    cars = []
    for i, info in enumerate(car_infos):
        cars.append(Car(info[0]))
        cars.append(Car(info[1]))
    print(sorted(cars))
    print(num_collisions(cars[:3], cars[3:]))
