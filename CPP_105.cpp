bool issame(int a, int b) {
    string str1 = "", str2 = "";
    switch (a) {
        case 1:
            str1 = "One";
            break;
        case 2:
            str1 = "Two";
            break;
        case 3:
            str1 = "Three";
            break;
        case 4:
            str1 = "Four";
            break;
        case 5:
            str1 = "Five";
            break;
        case 6:
            str1 = "Six";
            break;
        case 7:
            str1 = "Seven";
            break;
        case 8:
            str1 = "Eight";
            break;
        case 9:
            str1 = "Nine";
            break;
    }

    switch (b) {
        case 1:
            str2 = "One";
            break;
        case 2:
            str2 = "Two";
            break;
        case 3:
            str2 = "Three";
            break;
        case 4:
            str2 = "Four";
            break;
        case 5:
            str2 = "Five";
            break;
        case 6:
            str2 = "Six";
            break;
        case 7:
            str2 = "Seven";
            break;
        case 8:
            str2 = "Eight";
            break;
        case 9:
            str2 = "Nine";
            break;
    }

    return (str1 == str2);
}