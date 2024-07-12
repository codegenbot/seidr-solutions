string1 = input("Enter the first string: ").strip()
string2 = input("Enter the second string: ").strip()
print(max([string1, string2], key=len))