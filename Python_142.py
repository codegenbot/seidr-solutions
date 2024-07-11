def check():
    n = int(input("Enter a number: "))
    num = calculate_sum_of_cubes(n)
    if num < 1000000:
        return "The sum of cubes is less than 1 million."
    else:
        return "The sum of cubes is greater than or equal to 1 million."


print(check())