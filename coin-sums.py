return (
    (f"{result[0]} quarter{'s' if result[0] > 1 else ''}",),
    (f"{result[1]} dime{'s' if result[1] > 1 else ''}" ,),
    (f"{result[2]} nickel{'s' if result[2] > 1 else ''}",),
    (f"{result[3]} penny{'s' if result[3] > 1 else ''}" )
)