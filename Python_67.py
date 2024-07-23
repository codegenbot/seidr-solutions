s = str(input("Enter a sentence: "))
n = int(input("Enter a number: "))
n -= int(''.join(filter(str.isdigit, s)))
n -= int(''.join(filter(str.isdigit, [c for c in s if c != ' ' and c != 'o' and c != 'a'])))