```
def check(max_fill):
    remaining = 10 - max_fill
    if remaining > 0:
        return "Fill 'er up!"
    else:
        return "Don't waste fuel!"

max_fill = int(input("Enter maximum fill (1-10): "))

print(check(max_fill))