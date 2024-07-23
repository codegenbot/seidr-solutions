s = input("Enter a sentence: ")
n = int(input("Enter a number: "))
n -= sum(int(d) for d in ''.join(filter(str.isdigit, s)))
n += sum(int(d) for d in ''.join(filter(str.isdigit, [c for c in s if c != ' ' and (s[s.index(c)+1:] == 'of' or s[s.index(c)+1:] == 'on')])) - 2