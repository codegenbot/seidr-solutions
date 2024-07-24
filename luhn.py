def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return str(
        sum(
            2 * int(i) if i[1] == "0" else int(i)
            for i in (
                str(2 * i) if index % 2 == 0 else i
                for index, i in enumerate(str(card_number))
            )[1:]
        )
        % 10
    )