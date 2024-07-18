n = int(input())
vector = [int(input()) for _ in range(n)]

mid = n // 2
if sum(vector[:mid]) == sum(vector[mid:]):
    print(vector[:mid])
    print(vector[mid:])
else:
    min_diff = abs(sum(vector[:mid]) - sum(vector[mid:]))
    for i in range(1, mid):
        diff = abs(sum(vector[: mid - i]) - sum(vector[mid - i :]))
        if diff <= min_diff:
            min_diff = diff
        else:
            break
    print(vector[: mid - i + 1])
    print(vector[mid - i + 1 :])