

<COMMENT>

<COMMENT>
def bouncing_balls(starting, first, n):
    if starting == 0:
        return 0
    elif first <= 0:
        return 0
    else:
        return (first/starting)**n * (1-((first/starting)**2)) / (1-(first/starting)**2) + first/(first/starting)-1

# Testing
print(bouncing_balls(1.001, 1.0, 1))
print(bouncing_balls(100.0, 99.999, 20))
print(bouncing_balls(100.0, 1.0, 20))
print(bouncing_balls(15.319, 5.635, 1))
print(bouncing_balls(2.176, 1.787, 1))
