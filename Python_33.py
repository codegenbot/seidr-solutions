```
def check():
    result = unique_and_sorted()
    if isinstance(result, list):
        print("The sorted and unique list of numbers is: ", end="")
        for number in result:
            print(number, end=" ")
        print()

check(unique_and_sorted())