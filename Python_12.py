```
n = int(input("Enter the number of strings: "))
if n <= 0:
    print("Expected a positive integer for the number of strings. Please try again.")
    result = None
else:
    strings = []
    for i in range(n):
        while True:
            string = input(f"Enter string {i+1}: ")
            if len(string) > 0:
                strings.append(string)
                break
            else:
                print("Please enter a non-empty string. Try again.")
    result = longest(strings)
    if result is not None:
        print("The longest strings are:")
        for s in result:
            print(s)
    else:
        print("No strings were entered.")