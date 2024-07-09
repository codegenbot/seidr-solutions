```
const std::string roman(int n) {
    if (n >= 1000) return "M" + roman(n - 1000);
    else if (n >= 900) return "CM";
    else if (n >= 500) return "D" + roman(n - 500);
    else if (n >= 400) return "CD";
    else if (n >= 100) return n >= 90 ? "CM" : n >= 50 ? "L" : n >= 40 ? "XL" : n >= 10 ? (n >= 9 ? "IX" : (n >= 5 ? "V" : (n >= 4 ? "IV" : "I"))) + roman(n - ((n >= 90) || (n >= 50) ? 50 : 10));
    else return "";
}