def tri(n):
    if n == 0:
        return [0]
    elif n == 1:
        return [1, 1]
    else:
        tribonacci = [1, 1, 3]
        for i in range(3, n):
            tribonacci.append(tribonacci[i - 1] + tribonacci[i - 2] + tribonacci[i - 3])
        return tribonacci[:n]

# Ensure that the corrected function returns the correct output for the given test case
assert tri(1) == [1]
assert tri(2) == [1, 1]
assert tri(3) == [1, 1, 3]
assert tri(4) == [1, 1, 3, 5]