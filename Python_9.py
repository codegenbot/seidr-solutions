numbers = []
while True:
    num = input("Enter a number or type 'stop' to end: ").strip()
    if num == 'stop':
        break
    numbers.append(int(num))