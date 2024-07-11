def main():
    find_zero = input("Enter coefficients (a b c [d]): ").split()
    if len(find_zero) > 3:
        try:
            d = int(find_zero[3])
        except ValueError:
            print("Invalid input. Please enter a valid integer for coefficient d.")
            exit(1)
    else:
        d = None
    try:
        a, b, c = map(int, find_zero[:3])
    except ValueError:
        print(
            "Invalid input. Please enter valid integers for coefficients a, b, and c."
        )
        exit(1)
    solve_quadratic_equation(a, b, c, d)


if __name__ == "__main__":
    main()