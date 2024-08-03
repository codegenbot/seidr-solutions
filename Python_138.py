def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        if sum(j for j in range(2, i + 1, 2) if i == j + j) == n:
            return True
    return False


if __name__ == "__main__":
    print(is_equal_to_sum_even(int(input("Enter a number: "))))