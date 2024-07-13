import math
vector = list(map(int, input("Enter the vector of positive integers (space separated): ").split()))
print(sum(math.floor(i // 3) - 2 for i in [x for x in vector if x > 0]))