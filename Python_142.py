def sum_squares(lst):
    total = 0
    for i in range(len(lst)):
        if i % 3 == 0 and i % 4 != 0:
            total += lst[i] ** 2
        elif i % 4 == 0 and i % 3 != 0:
            total += lst[i] ** 3
        else:
            total += lst[i]
    return total

if __name__ == "__main__":
    user_input = input("Enter a list of numbers separated by commas: ")
    user_input = [int(x) for x in user_input.split(",")]
    print(sum_squares(user_input))