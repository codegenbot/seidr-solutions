```
def find_pair(n, numbers):
    for i in range(n):
        for j in range(i+1, n):
            if numbers[i] + numbers[j] == int(input()):
                return str(numbers[i]) + '\n' + str(numbers[j])

print(find_pair(int(input()), [int(x) for x in input().split()]))