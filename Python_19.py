def main():
    while True:
        cont = input("Do you want to compare numbers? (y/n): ")
        if cont.lower() != "y":
            break
        check(solve)


main()