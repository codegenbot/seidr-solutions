def below_zero(input_operations):
    count = 0
    for num in input_operations:
        if num < 0:
            count += 1
    return count

n = int(input().strip())
input_operations = list(map(int, input().strip().split()))
assert len(input_operations) == n
print(below_zero(input_operations))