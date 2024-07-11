def solve():
    while True:
        binary = (
            input("Do you want to convert from binary (yes) or decimal (no)? ").lower()
            == "yes"
        )
        try:
            if binary:
                N = int(input("Enter a {} number: ".format("binary")), 2)
            else:
                N = float(input("Enter a {} number: ".format("decimal")))
            print(str(N))
            cont = input("Do you want to continue? (yes/no) ")
            if cont.lower() != "yes":
                break
        except ValueError:
            print(
                "Invalid input! Please enter a valid {}".format(
                    "binary" if binary else "decimal"
                )
            )


solve()