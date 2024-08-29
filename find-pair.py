def find_pair():
    n = int(input())
    numbers = [int(x) for x in input().split()]
    target_sum = int(input())

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if numbers[i] + numbers[j] == target_sum:
                return str(numbers[i]) + "\n" + str(numbers[j])

    return "Not found"


print(find_pair())