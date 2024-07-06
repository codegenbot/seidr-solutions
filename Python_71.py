def triangle_area(a, b, c):
    if a + b <= c or a + c <= b or b + c <= a:
        return -1
    else:
        s = (a + b + c) / 2
        area = round((s*(s-a)*(s-b)*(s-c)) ** 0.5, 2)
        print(f"The area of the triangle is {area}.")
        
        while True:
            response = input("Do you want to calculate another triangle? (yes/no): ")
            if response.lower() == "no":
                return