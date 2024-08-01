def main():
    a = float(input("Enter side A: "))
    b = float(input("Enter side B: "))
    c = float(input("Enter side C: "))

    area = triangle_area(a, b, c)

    if area == -1:
        print("These sides do not form a valid triangle.")
    else:
        print(f"The area of the triangle is {area}.")


def triangle_area(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        s = (a + b + c) / 2
        return round(math.sqrt(s * (s - a) * (s - b) * (s - c)), 2)
    else:
        return -1