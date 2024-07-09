def find_pair(a, target):
    for i in range(len(a)):
        for j in range(i+1, len(a)):
            if a[i] + a[j] == target:
                return str(a[i]) + '\n' + str(a[j])

a = [int(i) for i in input().split()]
target = int(input())
print(find_pair(a, target))