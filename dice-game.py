n = int(input())
m = int(input())
peter_probability = (n - 1) / float(n)
colin_probability = 1 / m
probability = peter_probability * colin_probability
print(round(probability, 2))