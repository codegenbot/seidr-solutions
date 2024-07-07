def basement(vector):
    for i in range(len(vector)):
        total = sum(vector[: i + 1])
        if total < 0:
            return i
    return -1


# Example usage
vector = [int(x) for x in input().split()]
print(basement(vector))