def camel_case(s):
    result = s.replace "-", " ".replace(" ", "".capitalize()).join()