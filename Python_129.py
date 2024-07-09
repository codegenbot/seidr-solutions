import collections


def minFallingRainWater():
    n = int(input("Enter the number of rows: "))

    # Read the grid from user
    m = list(map(str, input(f"Enter {n} rows separated by space: ").split()))

    for i in range(0, len(m), n):
        m[i] = [int(x) for x in m[i]]

    return minFallingRainWater(list(map(int, m)))


print(minFallingRainWater())