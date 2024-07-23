```
def cut_vector(vector):
    if len(vector) <= 1:
        return [vector], []

    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return [vector[:split_index]], [vector[split_index:]]


def main():
    vector = list(map(int, input("Enter a vector of positive integers (space-separated): ").split()))
    result1, result2 = cut_vector(vector)
    print(f"First subvector: {result1}")
    print(f"Second subvector: {result2}")


main()