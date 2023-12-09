def count_up_to(n):
numbers = list(range(2, n+1))
for i in range(2, int(n**0.5) + 1):
if numbers[i] % i == 0:
numbers[i] = 0
return [x for x in numbers if x != 0]