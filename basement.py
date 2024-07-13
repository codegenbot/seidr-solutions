def basement(indexes):
    total = 0
    for i in range(len(indexes)):
        total += indexes[i]
        if total < 0:
            return i
    return -1


index = int(input())
indexes = [int(x) for x in input().split()]
print(basement(indexes))