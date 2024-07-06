def count_up_to(n):
if n < 2:
return []
result = [2]
for i in range(3, n+1, 2):
if is_prime(i):
result.append(i)
return result