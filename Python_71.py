def triangle_area():
    while True:
        try:
            a = float(input("Enter side A: "))
            b = float(input("Enter side B: "))
            c = float(input("Enter side C: "))

            if a + b <= c or a + c <= b or b + c <= a:
                return -1
            else:
                s = (a + b + c) / 2
                return round((s*(s-a)*(s-b)*(s-c)) ** 0.5, 2)
        except ValueError:
            print("Invalid input. Please enter numbers.")

print(triangle_area())