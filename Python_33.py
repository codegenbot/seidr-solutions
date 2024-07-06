def sort_third(l: list):
    multiples_of_three = [i for i in l if i % 3 == 0]
    multiples_of_three.sort()
    return [
        i if i % 3 != 0 else multiples_of_three.pop(0) if i % 3 == 0 else i
        for i in l
    ]