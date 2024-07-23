def find_pair(n):
    a = list(map(int, input().split()))
    target = int(input())
    for i in range(n):
        for j in range(i + 1, n):
            if a[i] + a[j] == target:
                return "{} {}".format(a[i], a[j])


print(find_pair(int(input())))