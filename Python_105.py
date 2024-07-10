def by_length(arr):
    result = sorted([i for i in arr if 1 <= i <= 9])
    result.reverse()
    names = ["Zero"] + [
        f"{'One' if x==1 else 'Two' if x==2 else 'Three' if x==3 else 'Four' if x==4 else 'Five' if x==5 else 'Six' if x==6 else 'Seven' if x==7 else 'Eight' if x==8 else 'Nine'}"
        for x in result
    ]
    return names