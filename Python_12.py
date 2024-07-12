string1 = raw_input("Enter the first string: ").strip()
string2 = raw_input("Enter the second string: ").strip()

if len(string1) > len(string2):
    print(string1)
else:
    print(string2)