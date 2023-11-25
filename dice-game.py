n = int(input())
m = int(input())

if n >= m:
  probability = 1 - (m-1)/n
else:
  probability = 0

print(probability)