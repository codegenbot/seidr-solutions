def find_pair(target):
    numbers = [int(x) for x in input().split()]
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if numbers[i] + numbers[j] == target:
                return str(numbers[i]) + "\n" + str(numbers[j])