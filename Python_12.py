string1 = input("Enter the first string: ").strip()
string2 = input("Enter the second string: ").strip()

if len(string1) > len(string2):
    print(string1)
else:
    print(string2)