def find_pair(n, numbers):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if numbers[i] + numbers[j] == n:
                return str(numbers[i]) + "\n" + str(numbers[j])
    return "No pair found"


n = int(input())
numbers = list(map(int, input().split()))
print(find_pair(n, numbers))