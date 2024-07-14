def find_pair(n):
    a = list(map(int, input().split()))
    target = int(input())
    for i in range(len(a)):
        for j in range(i + 1, len(a)):
            if a[i] + a[j] == target:
                return str(a[i]) + "\n" + str(a[j])


print(find_pair(int(input())))