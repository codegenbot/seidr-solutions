def find_pair(n, numbers):
    for i in range(n):
        for j in range(i + 1, n):
            if numbers[i] + numbers[j] == int(input()):
                return f"{numbers[i]} {numbers[j]}"
    return "No pair found"


n = int(input())
print(find_pair(n, list(map(int, input().split()))))