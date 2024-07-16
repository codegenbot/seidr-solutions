def find_pair(n):
    a = list(map(int, input().split()))
    for i in range(len(a)):
        for j in range(i + 1, len(a)):
            if abs(a[i] + a[j]) == int(input()):
                return f"{a[i]} {a[j]}"
    return "No pair found"


n = int(input())
print(find_pair(n))