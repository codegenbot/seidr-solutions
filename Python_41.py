def car_race_collision(n):
    collisions = 0
    for i in xrange(0, n-1):
        for j in xrange(i+1, n):
            collisions += 1
    return collisions


#FINAL_SOL
# def car_race_collision(n):
#     collisions = 0
#     for i in xrange(0, n-1):
#         for j in xrange(i+1, n):
#             collisions += 1
#     return collisions

# def car_race_collision(n):
#     collisions = 0
#     for i in xrange(0, n-1):
#         for j in xrange(i+1, n):
#             collisions += 1
#     return collisions
