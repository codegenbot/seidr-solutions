```
def ask_triangle_info():
    a = float(input("Enter base of the triangle: "))
    h = float(input("Enter height of the triangle: "))
    area = triangle_area(a, h)
    print(f"The area of the triangle is {area}.")

def triangle_area(a, h):
    return 0.5 * a * h