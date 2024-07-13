```
def check():
    num = int(input("Enter an integer between 1 and 5: "))
    words = ["hello", "world", "python", "java"]
    if num < 1 or num > 5:
        print("Number is out of range")
    else:
        for word in words:
            if len(word) == num:
                print(f"Found match: {word}")
check()