h1 = float(input())
h2 = float(input())
n = int(input())
bounciness_index = h2 / h1
total_distance = (
    h1
    + h2
    + 2 * h2 * bounciness_index * (1 - bounciness_index**n) / (1 - bounciness_index)
)
print(total_distance)