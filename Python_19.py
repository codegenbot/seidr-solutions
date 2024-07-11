def main():
    while True:
        check(solve)
        cont = input("Do you want to compare more numbers? (y/n): ")
        if cont.lower() != "y":
            break