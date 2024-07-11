numbers = input("Enter numbers separated by space: ")
num_dict = {str(i): i for i in range(1, 11)}


def solve():
    return " ".join([k for k, v in num_dict.items() if v == int(k)])


print(solve())