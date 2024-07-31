```Python
def solution(n):
    count = 0
    max_sum = 0
    for k in range(1, n + 1): 
        for i in range(k-1): 
            j = i+1
            total = (i * i - i + 1) + (j * j - j + 1) + (k * k - k + 1)
            if total % 3 == 0:
                count += 1
                max_sum = max(max_sum, total)
    return count, max_sum

n = int(input("Enter a number: "))
if solution(n)[1] == 0:
    print(f"No valid input found for n={n}.")
else:
    count, max_sum = solution(n)
    print(f"Count: {count}, Max Sum: {max_sum}")